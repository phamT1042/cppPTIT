#include<bits/stdc++.h>
using namespace std;
int demKH = 0, demMH = 0, demHD = 0;
class KH {
	public:
		string mkh, tkh, gt, ns, dc;
};
class MH {
	public:
		string mmh, tmh, dvt;
		int gm, gb;
};
KH kh[25];
MH mh[45];
class KhachHang {
	public:
		string maKH, tenKH, gioiTinh, date, diaChi;
		friend istream& operator>>(istream &in, KhachHang &x) {
			if (demKH == 0) cin.ignore();
			demKH++;
			x.maKH = "KH";
			x.maKH += (string(3 - to_string(demKH).length(), '0') + to_string(demKH));
			getline(in, x.tenKH);
			getline(in, x.gioiTinh);
			getline(in, x.date);
			getline(in, x.diaChi);
			kh[demKH - 1].mkh = x.maKH;
			kh[demKH - 1].tkh = x.tenKH;
			kh[demKH - 1].dc = x.diaChi;
			return in;
		}
};
class MatHang {
	public:
		string maMH, tenMH, donVi;
		int giaMua, giaBan;
		friend istream& operator>>(istream &in, MatHang &x) {
			demMH++;
			x.maMH = "MH";
			x.maMH += (string(3 - to_string(demMH).length(), '0') + to_string(demMH));
			cin.ignore();
			getline(in, x.tenMH);
			getline(in, x.donVi);
			cin >> x.giaMua >> x.giaBan;
			mh[demMH - 1].mmh = x.maMH;
			mh[demMH - 1].tmh = x.tenMH;
			mh[demMH - 1].gm = x.giaMua;
			mh[demMH - 1].gb = x.giaBan;
			return in;
		}
};
class HoaDon {
	public:
		string maKH, maMH, maHD;
		int soLuong, thanhTien, loiNhuan;
		friend istream& operator>>(istream &in, HoaDon &x) {
			demHD++;
			x.maHD = "HD";
			x.maHD += (string(3 - to_string(demHD).length(), '0') + to_string(demHD));
			return in >> x.maKH >> x.maMH >> x.soLuong;
		}
		friend void sapxep(HoaDon a[], int x);
		friend bool cmp (HoaDon, HoaDon);
		friend ostream &operator<<(ostream &out, HoaDon x) {
			out << x.maHD << " ";
			for (int i = 0; i < demKH; i++) {
				if (x.maKH == kh[i].mkh)
					out << kh[i].tkh << " " << kh[i].dc << " ";
			}
			for (int i = 0; i < demMH; i++) {
				if (x.maMH == mh[i].mmh) {
					return out << mh[i].tmh << " "
					       << x.soLuong << " " << x.thanhTien << " " << x.loiNhuan << endl;
				}
			}
		}
};
bool cmp(HoaDon a, HoaDon b) {
	if (a.loiNhuan != b.loiNhuan) return a.loiNhuan > b.loiNhuan;
	return a.maHD < b.maHD;
}
void sapxep(HoaDon a[], int x)  {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < demMH; j++) {
			if (a[i].maMH == mh[j].mmh) {
				a[i].thanhTien = mh[j].gb * a[i].soLuong;
				a[i].loiNhuan = a[i].thanhTien - mh[j].gm * a[i].soLuong;
				break;
			}
		}
	}
	sort(a, a + x, cmp);
}
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}

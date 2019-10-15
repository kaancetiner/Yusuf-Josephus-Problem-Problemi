/*  n toplam kişi sayısı (istediğiniz şekilde değiştirebilirsiniz)
    k ise kılıcın kaçar kaçar gideceği ilk olarak 1 de sonra 1. kişi 2. yi öldürünce 3.ye geçicek kılıç  */
int yusuf(int n, int k) 
{ 
  if (n == 1) 
    return 1; 
  else
    return (yusuf(n - 1, k) + k-1) % n + 1; 
} 
int main() 
{ 
  int n = 41; 
  int k = 2; 
  printf("Seçmen gereken sira %d", yusuf(n, k)); 
  return 0; 
} 

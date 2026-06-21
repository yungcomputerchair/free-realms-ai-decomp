// addr: 0x013a7a80
// name: Account_getPrivilegeClassForClient
// subsystem: common/common/account
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Account_getPrivilegeClassForClient(void * this) */

int __fastcall Account_getPrivilegeClassForClient(void *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
                    /* Returns a compact account privilege class: cached
                       staff/worlds-apart/volunteer/VIP tester values are mapped directly, otherwise
                       the routine checks the account id/name object and returns one of the fallback
                       public-user codes. */
  iVar2 = FUN_013a7780();
  if (0 < iVar2) {
    if (iVar2 < 3) {
      return 1;
    }
    if (iVar2 == 3) {
      return 3;
    }
  }
  uVar3 = *(undefined4 *)((int)this + 4);
  FUN_012cfde0(uVar3);
  cVar1 = FUN_012ce190(uVar3);
  return (-(uint)(cVar1 != '\0') & 0xfffffffc) + 9;
}


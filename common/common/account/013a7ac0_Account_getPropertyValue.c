// addr: 0x013a7ac0
// name: Account_getPropertyValue
// subsystem: common/common/account
// source (binary assert): common/common/account/Account.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool Account_getPropertyValue(void * this, uint propertyId_, void * value) */

bool __thiscall Account_getPropertyValue(void *this,uint propertyId_,void *value)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 ****ppppuVar3;
  int iVar4;
  undefined4 ****ppppuVar5;
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [8];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_2c [4];
  undefined4 ***apppuStack_28 [4];
  int iStack_18;
  uint uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Fetches an Account property into a ValueData, handling virtual account fields
                       before delegating to the backing PropertySet. Special cases include
                       privilege/status (0xffe), lower-case account name (0xfff), an integer
                       property adjusted by Account_getProperty101bPlusOne (0x101b), and the raw
                       account name (0x104e). */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01685f08;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)auStack_44;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffac;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x50) == 0) {
    FUN_012f5a60("mPropertySet","..\\common\\common\\account\\Account.cpp",0x10c,uVar2);
  }
  if (value == (void *)0x0) {
    FUN_012f5a60("value","..\\common\\common\\account\\Account.cpp",0x10d,uVar2);
  }
  switch(propertyId_) {
  case 0xffe:
    iVar4 = Account_getPrivilegeClassForClient(this);
    goto LAB_013a7c6a;
  case 0xfff:
    uStack_14 = 0xf;
    iStack_18 = 0;
    apppuStack_28[0] = (undefined4 ***)((uint)apppuStack_28[0] & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_2c,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               ((int)this + 8),0,0xffffffff);
    uStack_4 = 0;
    ppppuVar5 = (undefined4 ****)apppuStack_28[0];
    if (uStack_14 < 0x10) {
      ppppuVar5 = apppuStack_28;
    }
    ppppuVar5 = (undefined4 ****)((int)ppppuVar5 + iStack_18);
    if (ppppuVar5 == (undefined4 ****)0x0) {
LAB_013a7bd1:
      FUN_00d83c2d();
    }
    else {
      ppppuVar3 = (undefined4 ****)apppuStack_28[0];
      if (uStack_14 < 0x10) {
        ppppuVar3 = apppuStack_28;
      }
      if (ppppuVar5 < ppppuVar3) goto LAB_013a7bd1;
      ppppuVar3 = (undefined4 ****)apppuStack_28[0];
      if (uStack_14 < 0x10) {
        ppppuVar3 = apppuStack_28;
      }
      if ((undefined4 ****)((int)ppppuVar3 + iStack_18) < ppppuVar5) goto LAB_013a7bd1;
    }
    FUN_012a22e0(auStack_34);
    FUN_012a22e0(auStack_44);
    StdAlgorithm_transformUnaryRange(auStack_3c);
    FUN_01300680(3);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)((int)value + 8)
               ,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                abStack_2c,0,0xffffffff);
    uStack_4 = 0xffffffff;
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(apppuStack_28[0]);
    }
    uVar1 = 1;
    break;
  default:
    uVar1 = FUN_013111d0(propertyId_,value);
    break;
  case 0x101b:
    iVar4 = FUN_013a34b0();
LAB_013a7c6a:
    FUN_01300680(2);
    *(int *)((int)value + 8) = iVar4;
    uVar1 = 1;
    break;
  case 0x104e:
    FUN_01300680(3);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)((int)value + 8)
               ,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                ((int)this + 8),0,0xffffffff);
    uVar1 = 1;
  }
  ExceptionList = local_c;
  return (bool)uVar1;
}


// addr: 0x012c73a0
// name: FilterCriteria_matchesStringProperty
// subsystem: common/common/sort
// source (binary assert): common/common/sort/SortService.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool FilterCriteria_matchesStringProperty(void * thisObj, void * sortable) */

bool __thiscall FilterCriteria_matchesStringProperty(void *this,void *thisObj,void *sortable)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 ****ppppuVar3;
  undefined4 ****ppppuVar4;
  undefined4 ****ppppuVar5;
  void *unaff_EBX;
  undefined4 ****ppppuVar6;
  undefined1 auStack_48 [4];
  void *local_44;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_40;
  uint auStack_3c [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_34 [4];
  undefined4 ***apppuStack_30 [4];
  int iStack_20;
  uint uStack_1c;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Tests a sortable's string property against this criterion, optionally
                       lowercasing the property text before comparing it with the stored criterion
                       value. Evidence is the SortService.cpp 'sortable' assert, sortable virtual
                       property lookup, tolower transform, and final string comparison. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166ec30;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)auStack_48;
  ExceptionList = &local_c;
  local_44 = this;
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("sortable","..\\common\\common\\sort\\SortService.cpp",0x1e6,
                 DAT_01b839d8 ^ (uint)&stack0xffffffa8);
  }
  FUN_012fa910();
  uStack_4 = 0;
  cVar1 = (**(code **)(*(int *)thisObj + 8))(*(undefined4 *)((int)this + 4),&local_40);
  if (cVar1 != '\x01') {
    local_c = (void *)0xffffffff;
    FUN_01300cd0();
    ExceptionList = pvStack_14;
    return false;
  }
  if (local_44 != (void *)0x3) goto LAB_012c7595;
  uStack_1c = 0xf;
  iStack_20 = 0;
  apppuStack_30[0] = (undefined4 ***)((uint)apppuStack_30[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_34,local_40,0,0xffffffff);
  local_c = (void *)CONCAT31(local_c._1_3_,1);
  if (uStack_1c < 0x10) {
    ppppuVar6 = apppuStack_30;
LAB_012c746d:
    ppppuVar3 = (undefined4 ****)apppuStack_30[0];
    if (uStack_1c < 0x10) {
      ppppuVar3 = apppuStack_30;
    }
    if (ppppuVar6 < ppppuVar3) goto LAB_012c7491;
    ppppuVar3 = (undefined4 ****)apppuStack_30[0];
    if (uStack_1c < 0x10) {
      ppppuVar3 = apppuStack_30;
    }
    if ((undefined4 ****)((int)ppppuVar3 + iStack_20) < ppppuVar6) goto LAB_012c7491;
  }
  else {
    ppppuVar6 = (undefined4 ****)apppuStack_30[0];
    if ((undefined4 ****)apppuStack_30[0] != (undefined4 ****)0x0) goto LAB_012c746d;
LAB_012c7491:
    FUN_00d83c2d();
  }
  ppppuVar3 = (undefined4 ****)apppuStack_30[0];
  if (uStack_1c < 0x10) {
    ppppuVar3 = apppuStack_30;
  }
  ppppuVar3 = (undefined4 ****)((int)ppppuVar3 + iStack_20);
  if (ppppuVar3 == (undefined4 ****)0x0) {
LAB_012c74d8:
    FUN_00d83c2d();
  }
  else {
    ppppuVar4 = (undefined4 ****)apppuStack_30[0];
    if (uStack_1c < 0x10) {
      ppppuVar4 = apppuStack_30;
    }
    if (ppppuVar3 < ppppuVar4) goto LAB_012c74d8;
    ppppuVar4 = (undefined4 ****)apppuStack_30[0];
    if (uStack_1c < 0x10) {
      ppppuVar4 = apppuStack_30;
    }
    if ((undefined4 ****)((int)ppppuVar4 + iStack_20) < ppppuVar3) goto LAB_012c74d8;
  }
  if (uStack_1c < 0x10) {
    ppppuVar4 = apppuStack_30;
LAB_012c74f8:
    ppppuVar5 = (undefined4 ****)apppuStack_30[0];
    if (uStack_1c < 0x10) {
      ppppuVar5 = apppuStack_30;
    }
    if (ppppuVar4 < ppppuVar5) goto LAB_012c7518;
    ppppuVar5 = (undefined4 ****)apppuStack_30[0];
    if (uStack_1c < 0x10) {
      ppppuVar5 = apppuStack_30;
    }
    if ((undefined4 ****)((int)ppppuVar5 + iStack_20) < ppppuVar4) goto LAB_012c7518;
  }
  else {
    ppppuVar4 = (undefined4 ****)apppuStack_30[0];
    if ((undefined4 ****)apppuStack_30[0] != (undefined4 ****)0x0) goto LAB_012c74f8;
LAB_012c7518:
    FUN_00d83c2d();
  }
  auStack_3c[0] = auStack_3c[0] & 0xffffff00;
  FUN_012a26c0(auStack_3c,ppppuVar4,ppppuVar3,abStack_34,ppppuVar6,_tolower,unaff_EBX,auStack_3c[0])
  ;
  FUN_01300680(3);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_40,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             abStack_34,0,0xffffffff);
  local_c = (void *)((uint)local_c & 0xffffff00);
  if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
    _free(apppuStack_30[0]);
  }
  uStack_1c = 0xf;
  iStack_20 = 0;
  apppuStack_30[0] = (undefined4 ***)((uint)apppuStack_30[0] & 0xffffff00);
  this = unaff_EBX;
LAB_012c7595:
  uVar2 = FUN_012fe9b0(auStack_48,*(undefined4 *)((int)this + 8));
  local_c = (void *)0xffffffff;
  FUN_01300cd0();
  ExceptionList = pvStack_14;
  return (bool)uVar2;
}


// addr: 0x01406350
// name: TutorialDB_addRuleRecord
// subsystem: common/common/property
// source (binary assert): common/common/property/TutorialDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool TutorialDB_addRuleRecord(void * this, uint ruleId, char * ruleName) */

bool __thiscall TutorialDB_addRuleRecord(void *this,uint ruleId,char *ruleName)

{
  char cVar1;
  bool bVar2;
  char ****ppppcVar3;
  uint recordId;
  undefined4 *puVar4;
  uint size;
  undefined3 extraout_var;
  char ****ppppcVar5;
  void *local_4c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_48 [4];
  void *local_44;
  undefined4 local_34;
  uint local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  char ***local_28 [4];
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Builds a rule record name/string and inserts it into the TutorialDB
                       archive/index, asserting that the insert result is non-null. Evidence:
                       TutorialDB.cpp literal 'result', string manipulation of this+0x1c and
                       param_3, then calls archive lookup/add functions on this+4. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01691440;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_4c;
  ExceptionList = &local_c;
  local_4c = (void *)ruleId;
  local_14 = 0xf;
  local_18 = 0;
  local_28[0] = (char ***)((uint)local_28[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_2c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)((int)this + 0x1c),0,0xffffffff);
  local_4 = 0;
  FUN_01241650(&DAT_018e439c,2);
  StdString_appendSubstring(ruleName,0,0xffffffff);
  ppppcVar5 = (char ****)local_28[0];
  if (local_14 < 0x10) {
    ppppcVar5 = local_28;
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  ppppcVar3 = ppppcVar5;
  do {
    cVar1 = *(char *)ppppcVar3;
    ppppcVar3 = (char ****)((int)ppppcVar3 + 1);
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_48,(char *)ppppcVar5,(int)ppppcVar3 - ((int)ppppcVar5 + 1));
  local_4._0_1_ = 1;
  recordId = OdbFile_allocateRecordId(*(void **)((int)this + 4),(char *)local_48);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  puVar4 = PacketBuffer_identity((void *)ruleId);
  size = PacketBuffer_getSize(local_4c);
  bVar2 = OdbFile_putRecord(*(void **)((int)this + 4),(void *)*puVar4,size,recordId);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    FUN_012f5a60("result","..\\common\\common\\property\\TutorialDB.cpp",0xb5);
  }
  local_4 = 0xffffffff;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28[0]);
  }
  ExceptionList = local_c;
  return true;
}


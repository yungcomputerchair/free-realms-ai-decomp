// addr: 0x0126a7d0
// name: MessageDB_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 MessageDB_ctor(void)

{
  char cVar1;
  uint type_id;
  char *pcVar2;
  char ***_Str;
  long typeId;
  void *this;
  void *this_00;
  void *pvVar3;
  char *pcVar4;
  long lVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  char **local_28 [4];
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs MessageDB, sets current version/type ids, initializes RuleSetDB
                       storage, and resolves ArchetypeDB. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0165f9a8;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_2c;
  type_id = DAT_01b839d8 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  pcVar2 = (char *)FUN_012eb250(&DAT_01765848,&DAT_0175b400);
  local_14 = 0xf;
  local_18 = 0;
  local_28[0] = (char **)((uint)local_28[0] & 0xffffff00);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_2c,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0;
  _Str = (char ***)local_28[0];
  if (local_14 < 0x10) {
    _Str = local_28;
  }
  typeId = _atol((char *)_Str);
  if (0 < typeId) {
    lVar5 = typeId;
    ActionDB_ensureSingleton();
    PropertyTypeId_setOrDefault(this,lVar5);
    lVar5 = typeId;
    ArchetypeDB_getInstance();
    PropertyTypeOwner_setTypeIdOrDefault(this_00,lVar5,type_id);
    lVar5 = typeId;
    pvVar3 = (void *)FUN_012a84b0();
    MessageDB_setCurrentVersion(pvVar3,lVar5);
    pvVar3 = (void *)FUN_012a0710();
    RuleSetDB_ctorWithTypeId(pvVar3,typeId);
  }
  local_4 = 0xffffffff;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28[0]);
  }
  ExceptionList = local_c;
  return 1;
}


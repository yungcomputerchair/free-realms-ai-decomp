// addr: 0x012b8eb0
// name: ArchetypeDB_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall ArchetypeDB_ctor(void *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the ArchetypeDB singleton storage, initializes its property
                       trees/maps, stores default version 0x9f3, and loads the index for that
                       version. Evidence is ArchetypeDB_loadIndex and PropertyTree constructors. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166d854;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  PropertyTree25Alt_ctor((int)param_1);
  local_4 = 0;
  PropertyTree25_ctor((int)param_1 + 0xc);
  local_4._0_1_ = 1;
  FUN_0129d730(uVar1);
  local_4._0_1_ = 2;
  FUN_01247380();
  local_4._0_1_ = 3;
  FUN_0129d6c0();
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined4 *)((int)param_1 + 0x3c) = 0x9f3;
  ArchetypeDB_loadIndex(param_1,0x9f3);
  ExceptionList = local_c;
  return param_1;
}


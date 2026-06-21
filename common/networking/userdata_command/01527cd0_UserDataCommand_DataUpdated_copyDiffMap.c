// addr: 0x01527cd0
// name: UserDataCommand_DataUpdated_copyDiffMap
// subsystem: common/networking/userdata_command
// source (binary assert): common/networking/userdata_command/UserDataCommandDataUpdated.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_DataUpdated_copyDiffMap(void * this, void * diffMap) */

void __thiscall UserDataCommand_DataUpdated_copyDiffMap(void *this,void *diffMap)

{
  void *map;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  map = diffMap;
                    /* Copies the DataUpdated diff-map member after asserting the source map is
                       non-null. Evidence is the "diffMap" assert in UserDataCommandDataUpdated.cpp
                       and the sole caller from UserDataCommand_DataUpdated_cloneInto. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b9668;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (diffMap == (void *)0x0) {
    FUN_012f5a60("diffMap",
                 "..\\common\\networking\\userdata_command\\UserDataCommandDataUpdated.cpp",0x2a,
                 DAT_01b839d8 ^ (uint)&stack0xffffffd8);
  }
  PacketBuffer_init(local_20);
  uStack_4 = 0;
  diffMap = local_20;
  STLMap_intToSerializablePointer_serialize(&diffMap,(int)map);
  diffMap = local_20;
  ValueData_deserializeComponentPairMap(&diffMap);
  uStack_4 = 0xffffffff;
  RawBuffer_free(local_20);
  ExceptionList = local_c;
  return;
}


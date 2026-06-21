// addr: 0x012fa460
// name: PacketWriter_writeInstanceVector
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PacketWriter_writeInstanceVector(void * instanceVector) */

void PacketWriter_writeInstanceVector(void *instanceVector)

{
  void *in_ECX;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Serializes an instance-id vector through a temporary packet/string writer
                       object. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01675658;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012fa910(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  FUN_013010c0(instanceVector);
  DisplayAction_addArgValueData(in_ECX,local_18);
  local_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return;
}


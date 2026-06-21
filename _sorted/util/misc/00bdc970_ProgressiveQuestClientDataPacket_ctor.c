// addr: 0x00bdc970
// name: ProgressiveQuestClientDataPacket_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
ProgressiveQuestClientDataPacket_ctor(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ProgressiveQuestClientDataPacket by running
                       BaseProgressiveQuestPacket_ctor with type 1, setting the derived vtable, and
                       storing the provided field at offset 0xc. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ef668;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  BaseProgressiveQuestPacket_ctor(1);
  *param_1 = ProgressiveQuestClientDataPacket::vftable;
  param_1[3] = param_2;
  ExceptionList = local_c;
  return param_1;
}


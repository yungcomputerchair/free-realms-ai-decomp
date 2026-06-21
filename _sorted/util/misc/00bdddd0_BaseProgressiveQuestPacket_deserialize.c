// addr: 0x00bdddd0
// name: BaseProgressiveQuestPacket_deserialize
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall BaseProgressiveQuestPacket_deserialize(int param_1,int param_2)

{
                    /* Reads BaseProgressiveQuestPacket header fields from a bounded stream: a
                       16-bit value into offset 4 and a 32-bit value into offset 8, setting the
                       stream error flag on underrun. */
  if (*(short **)(param_2 + 0xc) < *(short **)(param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(int *)(param_1 + 4) = (int)**(short **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 2;
  }
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
    return;
  }
  *(undefined4 *)(param_1 + 8) = **(undefined4 **)(param_2 + 8);
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  return;
}


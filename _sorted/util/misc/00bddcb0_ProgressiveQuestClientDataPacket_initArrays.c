// addr: 0x00bddcb0
// name: ProgressiveQuestClientDataPacket_initArrays
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall ProgressiveQuestClientDataPacket_initArrays(int param_1)

{
                    /* Initializes the ProgressiveQuestClientDataPacket embedded SoeUtil::Array
                       members for ClientProgressiveQuestSlot and ClientProgressiveQuestPrizeSlot by
                       setting vtables and zeroing storage/count/capacity. */
  *(undefined ***)(param_1 + 0x30) = SoeUtil::Array<ClientProgressiveQuestSlot,0,1>::vftable;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined ***)(param_1 + 0x40) = SoeUtil::Array<ClientProgressiveQuestPrizeSlot,0,1>::vftable;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}


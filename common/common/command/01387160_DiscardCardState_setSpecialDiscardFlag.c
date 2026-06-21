// addr: 0x01387160
// name: DiscardCardState_setSpecialDiscardFlag
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DiscardCardState_setSpecialDiscardFlag(bool enabled) */

void DiscardCardState_setSpecialDiscardFlag(bool enabled)

{
  void *pvVar1;
  int unaff_ESI;
  undefined4 local_4;
  
                    /* Sets boolean property key 0x1a in the current state/value map, used when
                       discards target special play areas. */
  local_4 = 0x1a;
  pvVar1 = EvaluationEnvironment_getOrCreateReturnValue(&local_4,unaff_ESI);
  FUN_01300680(1);
  *(bool *)((int)pvVar1 + 8) = enabled;
  return;
}


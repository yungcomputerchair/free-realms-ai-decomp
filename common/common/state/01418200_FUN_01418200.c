// addr: 0x01418200
// name: FUN_01418200
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void set_value_boolean(uint key_, bool value_) */

void set_value_boolean(uint key_,bool value_)

{
  int iVar1;
  
                    /* Creates or finds a ValueData-like entry for a key, marks it as boolean type,
                       and stores the boolean payload at offset +8. */
  iVar1 = FUN_01417f70(&key_);
  FUN_01300680(1);
  *(bool *)(iVar1 + 8) = value_;
  return;
}


// addr: 0x01386e30
// name: FUN_01386e30
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void set_boolean_value_key_29(bool value_) */

void set_boolean_value_key_29(bool value_)

{
  void *pvVar1;
  int unaff_ESI;
  undefined4 local_4;
  
                    /* Finds/creates the ValueData entry with key 0x29, marks it boolean type, and
                       stores the boolean payload. */
  local_4 = 0x29;
  pvVar1 = EvaluationEnvironment_getOrCreateReturnValue(&local_4,unaff_ESI);
  FUN_01300680(1);
  *(bool *)((int)pvVar1 + 8) = value_;
  return;
}


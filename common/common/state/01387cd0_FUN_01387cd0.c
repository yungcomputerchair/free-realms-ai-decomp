// addr: 0x01387cd0
// name: FUN_01387cd0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void set_boolean_value_key_14(bool value_) */

void set_boolean_value_key_14(bool value_)

{
  void *pvVar1;
  int unaff_ESI;
  undefined4 local_4;
  
                    /* Finds/creates the ValueData entry with key 0x14, marks it boolean type, and
                       stores the boolean payload. */
  local_4 = 0x14;
  pvVar1 = EvaluationEnvironment_getOrCreateReturnValue(&local_4,unaff_ESI);
  FUN_01300680(1);
  *(bool *)((int)pvVar1 + 8) = value_;
  return;
}


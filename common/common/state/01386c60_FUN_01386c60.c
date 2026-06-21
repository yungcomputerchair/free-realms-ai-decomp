// addr: 0x01386c60
// name: FUN_01386c60
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void set_integer_value_for_key(int key_, int value_) */

void set_integer_value_for_key(int key_,int value_)

{
  void *pvVar1;
  int unaff_ESI;
  
                    /* Finds/creates a ValueData-like entry for the supplied key, marks it integer
                       type, and stores the integer payload. */
  pvVar1 = EvaluationEnvironment_getOrCreateReturnValue(&key_,unaff_ESI);
  FUN_01300680(2);
  *(int *)((int)pvVar1 + 8) = value_;
  return;
}


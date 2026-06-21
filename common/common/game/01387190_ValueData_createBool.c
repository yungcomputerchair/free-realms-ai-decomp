// addr: 0x01387190
// name: ValueData_createBool
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValueData_createBool(bool value_) */

void ValueData_createBool(bool value_)

{
  void *pvVar1;
  int unaff_ESI;
  undefined4 local_4;
  
                    /* Creates a ValueData-style boolean value: allocates/gets a type 0x19 value,
                       initializes type id 1, and stores the bool byte at offset +8. */
  local_4 = 0x19;
  pvVar1 = EvaluationEnvironment_getOrCreateReturnValue(&local_4,unaff_ESI);
  FUN_01300680(1);
  *(bool *)((int)pvVar1 + 8) = value_;
  return;
}


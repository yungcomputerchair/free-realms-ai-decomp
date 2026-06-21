// addr: 0x01386c90
// name: EvaluationEnvironment_setBooleanReturnValue
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EvaluationEnvironment_setBooleanReturnValue(int returnKey_, bool value_)
    */

void EvaluationEnvironment_setBooleanReturnValue(int returnKey_,bool value_)

{
  void *pvVar1;
  int unaff_ESI;
  
                    /* Gets or creates a return ValueData entry for the supplied key, initializes it
                       as boolean, and stores the boolean byte at offset +8. Called by command/rule
                       code that writes evaluation return values. */
  pvVar1 = EvaluationEnvironment_getOrCreateReturnValue(&returnKey_,unaff_ESI);
  FUN_01300680(1);
  *(bool *)((int)pvVar1 + 8) = value_;
  return;
}


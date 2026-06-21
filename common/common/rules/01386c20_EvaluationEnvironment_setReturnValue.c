// addr: 0x01386c20
// name: EvaluationEnvironment_setReturnValue
// subsystem: common/common/rules
// source (binary assert): common/common/rules/EvaluationEnvironment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EvaluationEnvironment_setReturnValue(void * slot, void * newValue) */

void EvaluationEnvironment_setReturnValue(void *slot,void *newValue)

{
  void *pvVar1;
  int unaff_EDI;
  
                    /* Assigns a non-null return value into a small holder, constructing/copying the
                       holder metadata and releasing the previous value. */
  pvVar1 = newValue;
  if (newValue == (void *)0x0) {
    FUN_012f5a60("value","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0xb5);
  }
  EvaluationEnvironment_getOrCreateReturnValue(&slot,unaff_EDI);
  FUN_013010e0(pvVar1);
  return;
}


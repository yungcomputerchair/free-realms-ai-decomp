// addr: 0x0148fa70
// name: TurnPropertiesPile_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool TurnPropertiesPile_evaluate(void * this, void * trace) */

bool __thiscall TurnPropertiesPile_evaluate(void *this,void *trace)

{
  undefined4 unaff_retaddr;
  
                    /* Validates the implicit object, traces 'pile: Turn Properties', and returns
                       true. */
  if (this == (void *)0xfffffffc) {
    FUN_00d83c2d();
  }
  EvaluationEnvironment_tracef(trace,"pile: Turn Properties",unaff_retaddr);
  return true;
}


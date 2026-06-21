// addr: 0x013814d0
// name: EvaluationEnvironment_setCurrentTargetFromElement
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EvaluationEnvironment_setCurrentTargetFromElement(void * env, void *
   element) */

void __thiscall
EvaluationEnvironment_setCurrentTargetFromElement(void *this,void *env,void *element)

{
  undefined4 uVar1;
  
                    /* Stores zero when the element is null, otherwise stores the element id/member
                       returned from offset 0x34 into EvaluationEnvironment offset 0x0c. */
  if (env == (void *)0x0) {
    *(undefined4 *)((int)this + 0xc) = 0;
    return;
  }
  uVar1 = PlayElement_getId();
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return;
}


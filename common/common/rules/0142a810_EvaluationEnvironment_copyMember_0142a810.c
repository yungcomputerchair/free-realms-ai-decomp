// addr: 0x0142a810
// name: EvaluationEnvironment_copyMember_0142a810
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EvaluationEnvironment_copyMember_0142a810(void * this) */

void __thiscall EvaluationEnvironment_copyMember_0142a810(void *this)

{
  void *unaff_retaddr;
  void *in_stack_00000004;
  
                    /* Copies or assigns an EvaluationEnvironment subobject located at this+0x84 by
                       forwarding to the EvaluationEnvironment copy helper. */
  EvaluationEnvironment_copyFrom(in_stack_00000004,(void *)((int)this + 0x84),unaff_retaddr);
  return;
}


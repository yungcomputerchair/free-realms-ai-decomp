// addr: 0x0142a830
// name: EvaluationEnvironment_copyMember_0142a830
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EvaluationEnvironment_copyMember_0142a830(void * this) */

void __thiscall EvaluationEnvironment_copyMember_0142a830(void *this)

{
  void *unaff_retaddr;
  void *in_stack_00000004;
  
                    /* Same code shape as 0142a810: forwards this+0x84 to the EvaluationEnvironment
                       copy helper. */
  EvaluationEnvironment_copyFrom(in_stack_00000004,(void *)((int)this + 0x84),unaff_retaddr);
  return;
}


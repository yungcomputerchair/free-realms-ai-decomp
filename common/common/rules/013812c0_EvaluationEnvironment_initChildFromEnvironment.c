// addr: 0x013812c0
// name: EvaluationEnvironment_initChildFromEnvironment
// subsystem: common/common/rules
// source (binary assert): common/common/rules/EvaluationEnvironment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EvaluationEnvironment_initChildFromEnvironment(void * env, void *
   parentEnv) */

void __thiscall EvaluationEnvironment_initChildFromEnvironment(void *this,void *env,void *parentEnv)

{
  undefined4 uVar1;
  
                    /* Copies the game, origin/target ids, player, and tracing flags from another
                       EvaluationEnvironment and records the source environment at offset 0x90. It
                       asserts the source environment pointer is non-null. */
  if (env == (void *)0x0) {
    FUN_012f5a60("environment","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x66);
  }
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)env + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)env + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)env + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)env + 0x10);
  uVar1 = *(undefined4 *)((int)env + 0x14);
  *(void **)((int)this + 0x90) = env;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined1 *)((int)this + 0x70) = *(undefined1 *)((int)env + 0x70);
  *(undefined1 *)((int)this + 0x71) = *(undefined1 *)((int)env + 0x71);
  return;
}


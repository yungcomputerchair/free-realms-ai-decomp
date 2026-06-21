// addr: 0x01386b70
// name: EvaluationEnvironment_copyFrom
// subsystem: common/common/rules
// source (binary assert): common/common/rules/EvaluationEnvironment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EvaluationEnvironment_copyFrom(void * env, void * sourceEnv) */

void __thiscall EvaluationEnvironment_copyFrom(void *this,void *env,void *sourceEnv)

{
  void *this_00;
  uint uVar1;
  uint uVar2;
  undefined1 auStack_8 [8];
  
                    /* Copies the core EvaluationEnvironment state and duplicates the target-list
                       vector from another environment, then copies tracing flags and parent/source
                       pointer. */
  if (env == (void *)0x0) {
    FUN_012f5a60("environment","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x55);
  }
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)env + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)env + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)env + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)env + 0x10);
  this_00 = (void *)((int)this + 0x7c);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)env + 0x14);
  uVar1 = *(uint *)((int)this + 0x84);
  if (uVar1 < *(uint *)((int)this + 0x80)) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)((int)this + 0x80);
  if (*(uint *)((int)this + 0x84) < uVar2) {
    FUN_00d83c2d();
  }
  FUN_01383cf0(auStack_8,this_00,uVar2,this_00,uVar1);
  ReturnValueMap_copyFromEnvironment(this_00,(void *)((int)env + 0x7c));
  *(undefined1 *)((int)this + 0x70) = *(undefined1 *)((int)env + 0x70);
  *(undefined1 *)((int)this + 0x71) = *(undefined1 *)((int)env + 0x71);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)((int)env + 0x90);
  return;
}


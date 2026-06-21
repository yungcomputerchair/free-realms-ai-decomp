// addr: 0x01383350
// name: EvaluationEnvironment_hasValueForKey
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool EvaluationEnvironment_hasValueForKey(void * env, int key_) */

bool __fastcall EvaluationEnvironment_hasValueForKey(void *env,int key_)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_8 [8];
  
  while( true ) {
    piVar4 = (int *)FUN_013831f0(local_8,&stack0x00000004);
    uVar1 = *(uint *)((int)env + 0x84);
    uVar2 = piVar4[1];
    iVar3 = *piVar4;
    if (uVar1 < *(uint *)((int)env + 0x80)) {
      FUN_00d83c2d();
    }
    if ((iVar3 == 0) || (iVar3 != (int)env + 0x7c)) {
      FUN_00d83c2d();
    }
    if (uVar2 != uVar1) break;
    env = *(void **)((int)env + 0x90);
    if (env == (void *)0x0) {
      return false;
    }
  }
  return true;
}


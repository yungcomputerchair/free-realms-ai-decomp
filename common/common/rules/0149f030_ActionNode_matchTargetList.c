// addr: 0x0149f030
// name: ActionNode_matchTargetList
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionNode_matchTargetList(void * this, void * env) */

bool __thiscall ActionNode_matchTargetList(void *this,void *env)

{
  void *pvVar1;
  byte bVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 unaff_EDI;
  int iVar5;
  int local_10;
  undefined4 *local_c;
  undefined4 *local_4;
  
                    /* Iterates stored target pairs, logs target matching, resolves the current
                       target, and invokes a virtual matcher for each target entry. */
  pvVar1 = env;
  EvaluationEnvironment_tracef(env,"target == target1",unaff_EDI);
  local_4 = *(undefined4 **)((int)this + 8);
  puVar4 = (undefined4 *)*local_4;
  local_10 = (int)this + 4;
  local_c = puVar4;
  pvVar3 = EvaluationEnvironment_resolveTarget(env);
  if (pvVar3 == (void *)0x0) {
    EvaluationEnvironment_tracef(env,"Got NULL target!",unaff_EDI);
  }
  env = (void *)0x0;
  iVar5 = (int)this + 4;
  while( true ) {
    if ((iVar5 == 0) || (iVar5 != (int)this + 4)) {
      FUN_00d83c2d();
    }
    if (puVar4 == local_4) break;
    if (iVar5 == 0) {
      FUN_00d83c2d();
    }
    if (puVar4 == *(undefined4 **)(iVar5 + 4)) {
      FUN_00d83c2d();
      if (puVar4 == *(undefined4 **)(iVar5 + 4)) {
        FUN_00d83c2d();
      }
    }
    bVar2 = (**(code **)(*(int *)this + 0x54))(puVar4[3],puVar4[4],pvVar1,1);
    env = (void *)(uint)bVar2;
    STLMapIterator_next(&local_10);
    puVar4 = local_c;
    iVar5 = local_10;
  }
  return (bool)env._0_1_;
}


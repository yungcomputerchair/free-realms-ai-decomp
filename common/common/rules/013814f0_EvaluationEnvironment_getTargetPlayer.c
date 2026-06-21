// addr: 0x013814f0
// name: EvaluationEnvironment_getTargetPlayer
// subsystem: common/common/rules
// source (binary assert): common/common/rules/EvaluationEnvironment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EvaluationEnvironment_getTargetPlayer(void * env) */

void * __fastcall EvaluationEnvironment_getTargetPlayer(void *env)

{
  void *pvVar1;
  int *piVar2;
  int playerId_;
  int in_EDX;
  int extraout_EDX;
  
                    /* Resolves the primary target as a Card and returns the Player owning that
                       card. Returns null when the target cannot be resolved or cast to Card. */
  if (*(int *)((int)env + 4) == 0) {
    FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x2bd);
    in_EDX = extraout_EDX;
  }
  pvVar1 = find_play_element_in_maps(*(void **)((int)env + 4),in_EDX);
  if (pvVar1 != (void *)0x0) {
    if (*(int *)((int)env + 4) == 0) {
      FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x2bd);
    }
    pvVar1 = find_play_element_in_maps(*(void **)((int)env + 4),*(int *)((int)env + 0xc));
    piVar2 = (int *)FUN_00d8d382(pvVar1,0,&PlayElement::RTTI_Type_Descriptor,
                                 &Card::RTTI_Type_Descriptor,0);
    if (piVar2 != (int *)0x0) {
      playerId_ = (**(code **)(*piVar2 + 0x28))();
      pvVar1 = PlayArea_findPlayerElementById(*(void **)((int)env + 4),playerId_);
      return pvVar1;
    }
  }
  return (void *)0x0;
}


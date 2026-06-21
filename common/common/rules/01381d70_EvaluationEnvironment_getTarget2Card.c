// addr: 0x01381d70
// name: EvaluationEnvironment_getTarget2Card
// subsystem: common/common/rules
// source (binary assert): common/common/rules/EvaluationEnvironment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EvaluationEnvironment_getTarget2Card(void * env) */

void * __fastcall EvaluationEnvironment_getTarget2Card(void *env)

{
  void *pvVar1;
  int in_EDX;
  int extraout_EDX;
  
                    /* Resolves target2 and dynamic-casts the play element to Card. The RTTI
                       references PlayElement and Card and the decompiler omitted the returned cast
                       pointer. */
  if (*(int *)((int)env + 4) == 0) {
    FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x2bd);
    in_EDX = extraout_EDX;
  }
  pvVar1 = find_play_element_in_maps(*(void **)((int)env + 4),in_EDX);
  pvVar1 = (void *)FUN_00d8d382(pvVar1,0,&PlayElement::RTTI_Type_Descriptor,
                                &Card::RTTI_Type_Descriptor,0);
  return pvVar1;
}


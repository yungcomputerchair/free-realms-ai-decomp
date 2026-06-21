// addr: 0x01383ec0
// name: EvaluationEnvironment_getIntegerAsObject
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EvaluationEnvironment_getIntegerAsObject(void * env) */

void * EvaluationEnvironment_getIntegerAsObject(void *env)

{
  void *pvVar1;
  int in_ECX;
  int elementId_;
  
                    /* Reads an integer ValueData from the environment and resolves it through the
                       game object lookup, returning null unless the object is active/valid. */
  FUN_01383460(env);
  pvVar1 = find_play_element_in_maps(*(void **)(in_ECX + 4),elementId_);
  if ((pvVar1 == (void *)0x0) || (*(char *)((int)pvVar1 + 0x44) == '\0')) {
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}


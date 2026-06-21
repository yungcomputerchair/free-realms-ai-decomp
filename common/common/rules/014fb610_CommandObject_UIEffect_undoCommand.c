// addr: 0x014fb610
// name: CommandObject_UIEffect_undoCommand
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_UIEffect_undoCommand(void * this) */

bool __fastcall CommandObject_UIEffect_undoCommand(void *this)

{
  void *pvVar1;
  
                    /* Logs the UIEffect undo operation and returns whether the referenced
                       effect/context is available. */
  Game_logGeneral(*(void **)((int)this + 0x30),"CommandObject_UIEffect::undoCommand %d $d",
                  *(undefined4 *)((int)this + 0x124));
  pvVar1 = EvaluationEnvironment_resolveTarget((void *)((int)this + 0x84));
  return pvVar1 != (void *)0x0;
}


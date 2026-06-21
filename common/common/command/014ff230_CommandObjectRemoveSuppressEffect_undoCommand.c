// addr: 0x014ff230
// name: CommandObjectRemoveSuppressEffect_undoCommand
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectRemoveSuppressEffect.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall CommandObjectRemoveSuppressEffect_undoCommand(int param_1)

{
  bool bVar1;
  void *unaff_EDI;
  
                    /* Undo half of RemoveSuppressEffect: checks the will-expire/environment flag,
                       asserts mTarget, and reverses/clears the suppress-effect state. Mirrors the
                       AddSuppressEffect do/undo pair. From CommandObjectRemoveSuppressEffect.cpp.
                       (collision-resolved vs 014ff1f0 doCommand) */
  bVar1 = ValueData_getWillExpire(unaff_EDI);
  if (!bVar1) {
    EvaluationEnvironment_tracef
              ((void *)(param_1 + 0x84),"Will Expire set to false on environment.",unaff_EDI);
    return 1;
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    FUN_012f5a60("mTarget","..\\common\\common\\command\\CommandObjectRemoveSuppressEffect.cpp",0x38
                );
  }
  PlayElement_addSuppressEffect(*(void **)(param_1 + 0x68),(void *)(param_1 + 0x124));
  return 1;
}


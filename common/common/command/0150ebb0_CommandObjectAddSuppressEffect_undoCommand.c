// addr: 0x0150ebb0
// name: CommandObjectAddSuppressEffect_undoCommand
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectAddSuppressEffect.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObjectAddSuppressEffect_undoCommand(void * this) */

bool __fastcall CommandObjectAddSuppressEffect_undoCommand(void *this)

{
                    /* Undoes an AddSuppressEffect command by requiring mTarget and removing the
                       suppress effect value data from the target play element. Returns true after
                       calling the removeSuppressEffect helper. */
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mTarget","..\\common\\common\\command\\CommandObjectAddSuppressEffect.cpp",0x2f);
  }
  PlayElement_removeSuppressEffect(*(void **)((int)this + 0x68),(void *)((int)this + 0x124));
  return true;
}


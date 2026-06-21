// addr: 0x0150eb70
// name: CommandObjectAddSuppressEffect_doCommand
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectAddSuppressEffect.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObjectAddSuppressEffect_doCommand(void * this) */

bool __fastcall CommandObjectAddSuppressEffect_doCommand(void *this)

{
                    /* Executes the AddSuppressEffect command by requiring mTarget and applying the
                       suppress effect value data to the target play element. Returns true after
                       calling the addSuppressEffect helper. */
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mTarget","..\\common\\common\\command\\CommandObjectAddSuppressEffect.cpp",0x25);
  }
  PlayElement_addSuppressEffect(*(void **)((int)this + 0x68),(void *)((int)this + 0x124));
  return true;
}


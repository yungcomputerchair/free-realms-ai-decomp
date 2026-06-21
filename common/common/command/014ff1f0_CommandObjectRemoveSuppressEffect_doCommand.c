// addr: 0x014ff1f0
// name: CommandObjectRemoveSuppressEffect_doCommand
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectRemoveSuppressEffect.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObjectRemoveSuppressEffect_doCommand(void * this) */

bool __fastcall CommandObjectRemoveSuppressEffect_doCommand(void *this)

{
                    /* Executes RemoveSuppressEffect by asserting mTarget is present, invoking
                       PlayElement::removeSuppressEffect with this command's value data, and
                       returning true. */
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mTarget","..\\common\\common\\command\\CommandObjectRemoveSuppressEffect.cpp",0x2c
                );
  }
  PlayElement_removeSuppressEffect(*(void **)((int)this + 0x68),(void *)((int)this + 0x124));
  return true;
}


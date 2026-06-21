// addr: 0x012f8f60
// name: DisplayAction_getArg
// subsystem: common/common/client
// source (binary assert): common/common/client/DisplayAction.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DisplayAction_getArg(void * this, int argIndex_) */

void * __thiscall DisplayAction_getArg(void *this,int argIndex_)

{
                    /* Bounds-checks argIndex against the DisplayAction mArgs vector and returns the
                       address of the 12-byte argument record. Evidence is the assert text index <
                       mArgs.size() in DisplayAction.cpp. */
  if ((*(int *)((int)this + 8) == 0) ||
     ((uint)((*(int *)((int)this + 0xc) - *(int *)((int)this + 8)) / 0xc) <= (uint)argIndex_)) {
    FUN_012f5a60("index < mArgs.size()","..\\common\\common\\client\\DisplayAction.cpp",0x39);
  }
  if ((*(int *)((int)this + 8) == 0) ||
     ((uint)((*(int *)((int)this + 0xc) - *(int *)((int)this + 8)) / 0xc) <= (uint)argIndex_)) {
    FUN_00d83c2d();
  }
  return (void *)(*(int *)((int)this + 8) + argIndex_ * 0xc);
}


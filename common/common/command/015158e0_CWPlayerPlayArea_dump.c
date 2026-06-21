// addr: 0x015158e0
// name: CWPlayerPlayArea_dump
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWPlayerPlayArea_dump(void * this, void * writer) */

void __thiscall CWPlayerPlayArea_dump(void *this,void *writer)

{
                    /* Wraps the PlayerPlayArea dump with outer writer begin/end calls, producing a
                       CWPlayerPlayArea-level debug dump. */
  (**(code **)(*(int *)this + 8))(writer);
  CWPlayerPlayArea_dump(this,writer);
  (**(code **)(*(int *)this + 0xc))(writer);
  return;
}


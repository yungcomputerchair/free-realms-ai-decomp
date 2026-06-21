// addr: 0x014384b0
// name: Engine_Filter_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_Filter_ctor(void * self) */

void __fastcall Engine_Filter_ctor(void *self)

{
                    /* Constructs an Engine::Filter by installing Engine::Filter::vftable and
                       initializing several embedded containers, flags, and a small-string buffer.
                       The vftable symbol provides the class name. */
  *(undefined ***)self = Engine::Filter::vftable;
  *(undefined4 *)((int)self + 8) = 0;
  *(undefined4 *)((int)self + 0xc) = 0;
  *(undefined4 *)((int)self + 0x10) = 0;
  *(undefined4 *)((int)self + 0x18) = 0;
  *(undefined4 *)((int)self + 0x1c) = 0;
  *(undefined4 *)((int)self + 0x20) = 0;
  *(undefined4 *)((int)self + 0x28) = 0;
  *(undefined4 *)((int)self + 0x2c) = 0;
  *(undefined4 *)((int)self + 0x30) = 0;
  *(undefined1 *)((int)self + 0x34) = 1;
  *(undefined4 *)((int)self + 0x3c) = 0;
  *(undefined4 *)((int)self + 0x40) = 0;
  *(undefined4 *)((int)self + 0x44) = 0;
  *(undefined4 *)((int)self + 0x60) = 0xf;
  *(undefined4 *)((int)self + 0x5c) = 0;
  *(undefined1 *)((int)self + 0x4c) = 0;
  return;
}


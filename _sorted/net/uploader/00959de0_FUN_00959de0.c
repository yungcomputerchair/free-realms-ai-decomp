// addr: 0x00959de0
// name: FUN_00959de0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void copyOptionalPlayerAppearanceBlock(void * this, void * source) */

void __thiscall copyOptionalPlayerAppearanceBlock(void *this,void *source)

{
                    /* Copies an optional block of player-related fields into offsets 0x60..0x90 and
                       sets a presence flag; clears the flag when the source is null. Class
                       ownership is not evident. */
  if (source != (void *)0x0) {
    *(undefined1 *)((int)this + 0x90) = 1;
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)source;
    *(undefined4 *)((int)this + 100) = *(undefined4 *)((int)source + 4);
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((int)source + 0x10);
    *(undefined4 *)((int)this + 0x74) = *(undefined4 *)((int)source + 0x14);
    *(undefined4 *)((int)this + 0x78) = *(undefined4 *)((int)source + 0x18);
    *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)((int)source + 0x1c);
    *(undefined4 *)((int)this + 0x80) = *(undefined4 *)((int)source + 0x20);
    *(undefined4 *)((int)this + 0x84) = *(undefined4 *)((int)source + 0x24);
    *(undefined4 *)((int)this + 0x88) = *(undefined4 *)((int)source + 0x28);
    return;
  }
  *(undefined1 *)((int)this + 0x90) = 0;
  return;
}


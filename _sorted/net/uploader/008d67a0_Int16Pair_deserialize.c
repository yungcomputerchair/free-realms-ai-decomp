// addr: 0x008d67a0
// name: Int16Pair_deserialize
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Int16Pair_deserialize(int this_, int stream_) */

void __thiscall Int16Pair_deserialize(void *this,int this_,int stream_)

{
                    /* Deserializes two signed 16-bit values from a bounded buffer into fields at
                       offsets 4 and 8, setting the stream error flag on underrun. */
  if (*(short **)(this_ + 0xc) < *(short **)(this_ + 8) + 1) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)(this_ + 0x10) = 1;
    *(undefined4 *)(this_ + 8) = *(undefined4 *)(this_ + 0xc);
  }
  else {
    *(int *)((int)this + 4) = (int)**(short **)(this_ + 8);
    *(int *)(this_ + 8) = *(int *)(this_ + 8) + 2;
  }
  if (*(short **)(this_ + 0xc) < *(short **)(this_ + 8) + 1) {
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined1 *)(this_ + 0x10) = 1;
    *(undefined4 *)(this_ + 8) = *(undefined4 *)(this_ + 0xc);
    return;
  }
  *(int *)((int)this + 8) = (int)**(short **)(this_ + 8);
  *(int *)(this_ + 8) = *(int *)(this_ + 8) + 2;
  return;
}


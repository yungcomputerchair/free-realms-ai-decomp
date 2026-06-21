// addr: 0x0139dc40
// name: PilePlayArea_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PilePlayArea_serialize(void * this, void * stream) */

void __thiscall PilePlayArea_serialize(void *this,void *stream)

{
                    /* Writes a PilePlayArea block containing a nested PlayArea serialization
                       section. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting PilePlayArea\n");
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting PlayArea\n");
  PlayElement_serialize(this,stream);
  DebugStream_writeCString(stream,"Ending PlayArea\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  DebugStream_writeCString(stream,"Ending PilePlayArea\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}


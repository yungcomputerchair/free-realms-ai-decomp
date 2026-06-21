// addr: 0x01459860
// name: FUN_01459860
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_01459860(void * this, void * stream) */

void __thiscall FUN_01459860(void *this,void *stream)

{
  void *stream_00;
  bool bVar1;
  
                    /* Wrapper that opens a stream read scope, delegates to FUN_014b4f50, and closes
                       the scope if the nested read succeeds. Unlike most variants, the decompiler
                       did not preserve the boolean return value. */
  stream_00 = stream;
  (**(code **)(*(int *)this + 0x10))(stream,&stream);
  bVar1 = FUN_014b4f50(this,stream_00);
  if (!bVar1) {
    return;
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}


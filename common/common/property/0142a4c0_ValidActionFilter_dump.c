// addr: 0x0142a4c0
// name: ValidActionFilter_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValidActionFilter_dump(void * this, void * debugStream) */

void __thiscall ValidActionFilter_dump(void *this,void *debugStream)

{
  uint uVar1;
  
                    /* Dumps ValidActionFilter, including expression tree class id/body, enabled
                       flag, origin card id, and check-active flag. Evidence is 'Starting/Ending
                       ValidActionFilter' and the field labels. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting ValidActionFilter\n");
  PlayElement_serialize(this,debugStream);
  DebugStream_writeCString(debugStream,"mExpressionTree: classID: ");
  if (*(int *)((int)this + 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))();
  }
  Serializer_appendInteger(debugStream,uVar1);
  if (*(int *)((int)this + 0x40) != 0) {
    DebugStream_writeCString(debugStream,"mExpressionTree: ");
    (**(code **)(**(int **)((int)this + 0x40) + 0x28))(debugStream);
  }
  DebugStream_writeCString(debugStream,"Enabled: ");
  Serializer_appendInteger(debugStream,(uint)*(byte *)((int)this + 0x44));
  DebugStream_writeCString(debugStream,"OriginCard: ");
  if (*(int *)((int)this + 0x48) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = PlayElement_getId();
  }
  Serializer_appendInteger(debugStream,uVar1);
  DebugStream_writeCString(debugStream,"CheckActive: ");
  Serializer_appendInteger(debugStream,(uint)*(byte *)((int)this + 0x4c));
  DebugStream_writeCString(debugStream,"Ending ValidActionFilter\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}


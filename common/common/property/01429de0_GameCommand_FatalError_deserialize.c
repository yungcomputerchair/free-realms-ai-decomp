// addr: 0x01429de0
// name: GameCommand_FatalError_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameCommand_FatalError_deserialize(void * this, void * stream) */

bool __thiscall GameCommand_FatalError_deserialize(void *this,void *stream)

{
  void *this_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *pvVar4;
  int unaff_ESI;
  void **ppvStack_10;
  
                    /* Deserializes GameCommand_FatalError, including base GameCommand data, an
                       embedded command/object pointer, and a variable-length error text buffer when
                       present. */
  this_00 = stream;
  ppvStack_10 = &stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream);
  if (cVar1 != '\0') {
    cVar1 = GameCommand_deserializeCommon(this_00);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*(int *)((int)this + 0x24) + 0x24))(this_00);
      if (cVar1 != '\0') {
        if (unaff_ESI < 3) {
LAB_01429e7c:
          uVar3 = (**(code **)(*(int *)this + 0x14))(this_00);
          return (bool)uVar3;
        }
        bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 0x8c));
        if (bVar2) {
          bVar2 = Deserializer_readInteger(this_00,(int *)&ppvStack_10);
          if (bVar2) {
            *(void ***)((int)this + 0x90) = ppvStack_10;
            pvVar4 = Mem_Alloc((int)ppvStack_10 + 1);
            *(undefined4 *)((int)this + 0x88) = pvVar4;
            cVar1 = FUN_013cfed0((undefined4 *)((int)this + 0x88),*(undefined4 *)((int)this + 0x90))
            ;
            if (cVar1 != '\0') goto LAB_01429e7c;
          }
        }
      }
    }
  }
  return false;
}


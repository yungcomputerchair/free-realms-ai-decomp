// addr: 0x0138ab80
// name: Game_dispatchPackedIdCommand
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint Game_dispatchPackedIdCommand(void * this, uint packedId_, int
   allowForward_) */

uint __thiscall Game_dispatchPackedIdCommand(void *this,uint packedId_,int allowForward_)

{
  int objectPtr;
  bool bVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
                    /* Consumes a packed high-bit flag from an id, asks a virtual handler to process
                       it, and if needed forwards to another game/controller object. */
  objectPtr = allowForward_;
  if (allowForward_ != 0) {
    iVar2 = unknown_getField30((void *)allowForward_);
    in_EAX = 0;
    if (iVar2 != 0) {
      allowForward_ = packedId_;
      bVar1 = PackedId_consumeHighBitFlag_alt((uint *)&allowForward_);
      uVar3 = (**(code **)(*(int *)this + 0x1c0))(allowForward_);
      if (bVar1) {
        if ((char)uVar3 == '\0') {
LAB_0138abd6:
          piVar4 = (int *)unknown_getField30((void *)objectPtr);
          uVar3 = (**(code **)(*piVar4 + 0x98))(this,packedId_);
          return uVar3;
        }
        uVar3 = uVar3 & 0xffffff00;
      }
      else if ((char)uVar3 == '\0') goto LAB_0138abd6;
      return uVar3;
    }
  }
  return in_EAX & 0xffffff00;
}


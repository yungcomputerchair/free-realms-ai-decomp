// addr: 0x00818360
// name: Client_setUiScale
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void Client_setUiScale(int this_, float scale_) */

void __thiscall Client_setUiScale(void *this,int this_,float scale_)

{
  float fVar1;
  
                    /* Stores the UI scale, publishes UiScale, computes and publishes InverseUiScale
                       when the scale is positive, and caches the inverse on the client object. */
  *(int *)((int)this + 0xddb4) = this_;
  FUN_00976490("UiScale",this_);
  fVar1 = DAT_017f0250;
  if (_DAT_017ebf0c < (float)this_) {
    fVar1 = _DAT_0175b420 / (float)this_;
  }
  FUN_00976490("InverseUiScale",fVar1);
  *(float *)((int)this + 0xddb8) = fVar1;
  return;
}


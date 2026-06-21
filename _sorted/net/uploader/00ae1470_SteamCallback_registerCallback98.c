// addr: 0x00ae1470
// name: SteamCallback_registerCallback98
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SteamCallback_registerCallback98(void * this, int callbackTarget_, int
   callbackMethod_) */

void __thiscall SteamCallback_registerCallback98(void *this,int callbackTarget_,int callbackMethod_)

{
                    /* Registers a Steam callback after unregistering any existing callback when the
                       low state bit is set. Evidence is direct SteamAPI_UnregisterCallback and
                       SteamAPI_RegisterCallback(this, 0x98) calls. */
  if ((callbackTarget_ != 0) && (callbackMethod_ != 0)) {
    if ((*(byte *)((int)this + 4) & 1) != 0) {
      SteamAPI_UnregisterCallback(this);
    }
    *(int *)((int)this + 0xc) = callbackTarget_;
    *(int *)((int)this + 0x10) = callbackMethod_;
    SteamAPI_RegisterCallback(this,0x98);
  }
  return;
}


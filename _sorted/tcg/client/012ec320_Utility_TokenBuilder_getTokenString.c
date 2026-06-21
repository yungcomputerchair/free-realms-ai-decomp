// addr: 0x012ec320
// name: Utility_TokenBuilder_getTokenString
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * Utility_TokenBuilder_getTokenString(void * this) */

char * __fastcall Utility_TokenBuilder_getTokenString(void *this)

{
                    /* Returns the TokenBuilder string/storage area at offset 4. It is used
                       immediately after building command-line tokens such as --lang, --sessionID,
                       --realm and --username in CardClient initialization. */
  return (char *)((int)this + 4);
}


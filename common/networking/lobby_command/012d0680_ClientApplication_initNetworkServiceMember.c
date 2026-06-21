// addr: 0x012d0680
// name: ClientApplication_initNetworkServiceMember
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientApplication_initNetworkServiceMember(void * param_1) */

void __fastcall ClientApplication_initNetworkServiceMember(void *param_1)

{
  void *pvVar1;
  
                    /* Stores the global service object returned by 012f1d90 into the
                       ClientApplication member at offset +8. Evidence: ClientApplication_dtor later
                       checks the same member, ensures the same singleton, deletes it virtually, and
                       clears it. */
  pvVar1 = NetworkService_getSingleton();
  *(void **)((int)param_1 + 8) = pvVar1;
  return;
}


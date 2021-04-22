

#if UNITY_4_7 || UNITY_5 || UNITY_5_3_OR_NEWER
#define SUPPORTED_UNITY
#endif


namespace Photon.Chat
{
    using System;
    using ExitGames.Client.Photon;
    using UnityEngine.Serialization;



    #if !NETFX_CORE || SUPPORTED_UNITY
    [Serializable]
    #endif
    public class ChatAppSettings
    {
       
        #if SUPPORTED_UNITY
        [FormerlySerializedAs("AppId")]
        #endif
        public string AppIdChat;
        

        public string AppVersion;
        
        public string FixedRegion;
        
       
        public string Server;
        
        public ushort Port;
        
        public ConnectionProtocol Protocol = ConnectionProtocol.Udp;        
        
        
        public bool EnableProtocolFallback = true;

        public DebugLevel NetworkLogging = DebugLevel.ERROR;

        public bool IsDefaultNameServer { get { return string.IsNullOrEmpty(this.Server); } }

        
        [Obsolete("Use AppIdChat instead.")]
        public string AppId
        {
            get { return this.AppIdChat; }
            set { this.AppIdChat = value; }
        }
    }
}
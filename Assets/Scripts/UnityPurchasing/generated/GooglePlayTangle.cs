// WARNING: Do not modify! Generated file.

namespace UnityEngine.Purchasing.Security {
    public class GooglePlayTangle
    {
        private static byte[] data = System.Convert.FromBase64String("7m1jbFzubWZu7m1tbOoNBGIQaetc7m1OXGFqZUbqJOqbYW1tbWlsb4ZpuxkKR61Yu3UbPvrWyIyfMtnqwVjhr1ksInYVom4W0HwxbUrp4g+rj3jb7A0k5iG5+nhjiJNFOmnH9RTPFsYPrJCvT1m0wkae2+ZtOvxXeV7/t9y4NrUz9dpD7uk8rYxaZnBV/6sab4yOpQ6j6JFto6wLJvh5uDnhq0yB07WO6I7L2stmFeOuco1VEP0DJOeDHNnxbH3tA/7qHnSNAZU5zwWUFKfUWfWrSkJPGWkVucs7jrswpiuvybdJAOOaAVU1ul2b+sBu3iZ0c8dJ3sU00wMjZyRIPcEpmRVtZ5cNJ476FCZI/cmdmqwHUEQO/sTvDscIzgUehW5vbWxt");
        private static int[] order = new int[] { 1,1,5,6,7,6,6,11,13,10,10,12,12,13,14 };
        private static int key = 108;

        public static readonly bool IsPopulated = true;

        public static byte[] Data() {
        	if (IsPopulated == false)
        		return null;
            return Obfuscator.DeObfuscate(data, order, key);
        }
    }
}

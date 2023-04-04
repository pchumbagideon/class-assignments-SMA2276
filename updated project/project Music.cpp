#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Song {
private:
	string title, artist, album, release_year, genre;
	int duration, album_track_number;
public:
	string get_title() {
		return title;
	}
	void set_title(string t) {
		title = t;
	}
	string get_artist() {
		return artist;
	}
	void set_artist(string a) {
		artist = a;
	}
	string get_album() {
		return album;
	}
	void set_album(string a) {
		album = a;
	}
	string get_release_year() {
		return release_year;
	}
	void set_release_year(string ry) {
		release_year = ry;
	}
	string get_genre() {
		return genre;
	}
	void set_genre(string g) {
		genre = g;
	}
	int get_duration() {
		return duration;
	}
	void set_duration(int ry) {
		duration = ry;
	}
	int get_album_track_number() {
		return album_track_number;
	}
	void set_album_track_number(int g) {
		album_track_number = g;
	}
};

void addSong(vector<Song> &list) {

    Song newSong;
    string title, artist, album, release_year, genre;
    int duration, album_track_number;

    cout << "======== New Song ========" << endl;
    cout << "Enter title: ";
    getline(cin, title);
    cin.ignore(); // ignore newline character
    cout << "Enter artist: ";
    getline(cin, artist);
    cin.ignore(); // ignore newline character
    cout << "Enter album: ";
    getline(cin, album);
    cin.ignore(); // ignore newline character
    cout << "Enter release year: ";
    getline(cin, release_year);
    cout << "Enter genre: ";
    getline(cin, genre);
    cout << "Enter duration: ";
    cin >> duration;
    cin.ignore(); // ignore newline character
    cout << "Enter album track number: ";
    cin >> album_track_number;
    cin.ignore(); // ignore newline character

    newSong.set_title(title);
    newSong.set_artist(artist);
    newSong.set_album(album);
    newSong.set_release_year(release_year);
    newSong.set_genre(genre);
    newSong.set_duration(duration);
    newSong.set_album_track_number(album_track_number);

    list.push_back(newSong); // add song to list

}


void printAll(vector<Song> &list) {
    if(list.empty()) {
        cout << "Playlist is empty!" << endl;
        return;
    }
    cout << "================ Music Library ================" << endl;
    for(int i = 0; i < list.size(); i++) {
        Song song = list.at(i);
        cout << i+1 << ". " << song.get_title() << " - " << song.get_artist() << endl;
    }
}


void menu(vector<Song> &list) {
	int option = -1;

	cout << "================ Music Library ================" << endl;
	cout << "1. Add a Song" << endl;
	cout << "2. Edit a Song" << endl;
	cout << "3. Delete a Song" << endl;
	cout << "4. Print all Song" << endl << endl;

	cout << "Enter the option no.: ";
	cin >> option;
	cin.ignore();

	switch(option) {
	case 1:
		addSong(list);
		menu(list);
		break;
	case 2:
		//edit song function here
		menu(list);
		break;
	case 3:
		// delete song function here
		menu(list);
		break;
	case 4:
		printAll(list);
		menu(list);
		break;
	}
}

int main() {

	vector<Song> songs;

	menu(songs);

	return 0;
}
